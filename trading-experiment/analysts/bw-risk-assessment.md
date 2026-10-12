# BW Risk Assessment — Risk Management Report
**Date: 2026-10-12 (Monday), ~14:48 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Sixteenth BW report overall, second of the day — follows this desk's own 10:42 ET report and the trader's 13:38 ET no-trade run note. No new analyst report has posted since this morning (GS 12:41 ET, MS 10:13 ET, JPM 09:40 ET, BR 10/9 16:13 ET all still the freshest on file).

---

## Overall Portfolio Risk Grade: **D-** — held, unchanged from 10/9–10/12

## Single biggest risk right now
**A direct, unresolved contradiction in this run's own fresh WebSearch about whether the Hormuz crisis is actually easing — and it points the opposite direction from the narrative the book has been drifting toward.** This morning's 10:42 ET report leaned on a single AFP/Kpler shipping-volume figure suggesting partial normalization (~8M bpd vs. ~18M bpd pre-war, "real recovery"). This run's fresh, independently-sourced search instead surfaces IMF PortWatch's own transit-count data — **4 transits on October 4 against an 85/day pre-crisis baseline, i.e. the strait reads as effectively closed, not partially recovered** — plus corroborating detail this desk had not seen before: nearly 20 commercial ships attacked in the past month per CNBC, nine more UKMTO-logged incidents since, nine more sanctioned tankers (22 total), Brent at ~$104/bbl on 10/9 (above the already-elevated levels cited Friday), and Iran's own Strait Authority maintaining a "non-compliant vessel" target list. These two data points — "partial recovery to ~44% of normal" vs. "4 transits a day, essentially closed" — cannot both be describing the same reality. **This desk is flagging the contradiction itself as the risk, not picking a side:** the team's confidence that XLE's hedge thesis is "normalizing away" rests on thinner, more contestable sourcing than the last several reports have implied, and the more official-sounding data point (IMF PortWatch) argues the opposite — the supply shock may be *more* intact, not less, which cuts against recent reports' drift toward treating XLE's widening DCF gap as simply "the bear case materializing" rather than "the hedge still has a live catalyst." Layered on top of the now 11+-day-running rate/macro data blindness (unchanged, reproduced again this run), this is a second front where the book is sizing and reasoning on data this desk cannot currently verify is representative.

---

## Portfolio snapshot (live, 2026-10-12 ~14:41 ET)

`get_portfolio`: total_value **$100.8902555226** (cash $56.10 + equity $44.7902555226). Pool ≈ **$50.8902555226**, a **+$0.8902555226 (+1.78%) accumulated profit** — up slightly from this morning's 10:42 ET read (+1.51%) and the 13:38 ET read (+1.82%), essentially flat on the day within a narrow band.

`get_equity_quotes` (live last-trade vs. 10/9's official close):

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized P&L (cost) | Day Δ (vs 10/9 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $226.758 | $5.629 | 12.57% | 11.06% | +12.59% ($201.40) | -1.10% |
| VTI | 0.036690 | $381.289 | $13.992 | 31.24% | 27.49% | +2.94% ($370.40) | -0.17% |
| VXUS | 0.154525 | $84.430 | $13.047 | 29.13% | 25.64% | +0.36% ($84.13) | -0.46% |
| OMCL | 0.106405 | $36.920 | $3.929 | 8.77% | 7.72% | -21.43% ($46.99) | **+3.07%** |
| XLE | 0.086775 | $65.895 | $5.717 | 12.76% | 11.23% | +14.36% ($57.62) | +1.25% |
| GEHC | 0.036393 | $68.030 | $2.476 | 5.53% | 4.87% | **-0.96% ($68.69) — best reading since entry** | **+3.48% (today's biggest mover, again)** |
| Cash (deployable) | — | — | $6.10 | — | 11.99% | — | — |

NVDA+OMCL combined concentration: **21.34% of equity** — 3.66pp buffer to the 25% backstop trigger, a touch narrower than this morning's 3.86pp (OMCL's gain outweighed NVDA's own pullback shrinking its share). NVDA alone: **12.57% of equity**, comfortably below the 18-20% single-name trigger; **11.06% of pool** vs. BR's 10% target (+1.06pp over, inside the 5pp band, essentially flat vs. this morning). OMCL's DCA gate (rule 18: fires at $2.50 accumulated pool profit): **~$1.61 away** — the narrowest reading yet today, continuing its slow grind closer. **GEHC ($68.03) is now within ~1% of its own $68.69 entry cost for the first time since early September** — its best unrealized reading since the 9/3 buy, on a sixth-plus consecutive session of unexplained upward drift with no sourced catalyst found by this desk, JPM, or GS.

---

## 1. Correlation analysis between holdings

- **NVDA / VTI / VXUS**: unchanged — shared mega-cap AI/semis look-through exposure remains the dominant correlation cluster. The two core ETFs (60.37% of equity combined) again moved independently of NVDA today (both modestly red while NVDA fell harder), consistent with the standing view that the ETFs aren't purely NVDA-driven minute-to-minute.
- **NVDA / OMCL / GEHC / XLE**: low business-fundamentals correlation, but a shared discount-rate factor via DCF valuation — the channel frozen by the stale-rate problem below. Nothing new on this front since this morning.
- **XLE vs. everything else — now actively contested, not just an open question.** See the single-biggest-risk framing above: this run's fresh search surfaces IMF PortWatch transit-count data suggesting the strait is closer to fully closed than the "partial normalization" read this desk itself repeated this morning. XLE's own price (+1.25% today, a modest gainer) is at least directionally consistent with "the crisis hasn't resolved" rather than "it's normalizing" — worth noting XLE did not sell off on today's contradicting evidence, which is weak corroboration in the hedge's favor.
- **VTI / VXUS**: moderate positive correlation (global equity beta), genuinely diversifying on geography/currency — both modestly red again today, in step with each other.
- **OMCL / GEHC**: both "healthcare," different sub-sectors, low correlation beyond the label — today's moves (OMCL +3.07%, GEHC +3.48%) are both large and both unexplained, but in different names with different drivers cited by other desks (OMCL's has run for 5+ weeks; GEHC's drift is newer, dating to late September).

## 2. Sector concentration (% of equity, look-through where estimable)

| Sector / bucket | % of equity | Note |
|---|---|---|
| Technology / Semis / AI (look-through: direct NVDA + VTI's/VXUS's own tech weight) | **~27-30% (estimate)** | Direct NVDA alone is 12.57%; remainder is look-through via the two core ETFs — standing estimate, not re-derived this run |
| Diversified US equity (VTI, ex-tech-look-through) | 31.24% (gross) | Largest single line item, a basket not a sector bet |
| Diversified ex-US equity (VXUS, ex-tech-look-through) | 29.13% (gross) | Second-largest line item, same caveat |
| Energy (XLE) | 12.76% | Satellite/hedge sleeve — see correlation discussion above |
| Healthcare — tech/services (OMCL) | 8.77% | Smallest-cap, least liquid holding |
| Healthcare — medtech/equipment (GEHC) | 5.53% | Over BR's 4% target and still extending |

**Combined healthcare (OMCL+GEHC): 14.30% of equity.** **Combined satellite/conviction sleeve (NVDA+OMCL+XLE+GEHC): 39.63% of equity** vs. **60.37% in the two core ETFs.** No sector outside the AI/tech look-through approaches a concentration level this desk would flag independently.

## 3. Geographic exposure and currency risk

- **VTI**: 100% US-domiciled, USD-denominated. No direct FX risk.
- **VXUS**: ~100% ex-US (developed + EM), underlying holdings in EUR/JPY/GBP/EM currencies — the book's only real currency-translation exposure at the fund level. A sustained USD strength cycle is a return headwind independent of local performance.
- **NVDA**: USD revenue, but with Taiwan/China supply-chain and end-market exposure — geopolitical/export-control risk that rhymes with currency risk without being FX per se.
- **OMCL**: essentially pure US domestic revenue — no meaningful geographic/currency risk.
- **XLE**: US-domiciled integrated/E&P majors (XOM/CVX-weighted) with global operations; oil itself is a globally USD-priced commodity. Per the contradiction flagged above, this desk is no longer confident the supply picture is "gradually normalizing" — treat it as genuinely unresolved, not trending one way.
- **GEHC**: meaningful international revenue (global medtech sales) — some currency-translation exposure, smaller in dollar terms than VXUS's fund-level exposure given GEHC's 5.53% weight.

**Net: still a USD-heavy book.** VXUS is the only deliberate non-US/non-USD diversifier, sitting modestly over its 25% pool target (+0.64pp) — adequate as designed, no concern this run.

## 4. Interest rate sensitivity (per position)

| Position | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows; MS's DCF gap rests entirely on a Rf input now 11+ days stale |
| GEHC | **High** | Same DCF/WACC mechanism; MS's gap crossed its own noise band this past week and the stock keeps extending further above fair value on no catalyst |
| OMCL | **Moderate-high** | DCF-dependent valuation (MS's widest-on-book gap is itself WACC-sensitive), partially offset by contracted/recurring revenue |
| VTI | **Moderate** | Broad market including heavy mega-cap-growth/tech weighting, diversified by cyclicals/value too |
| VXUS | **Moderate-low** | Less mega-cap-growth-heavy than the US market; EM components carry independent rate/FX sensitivity |
| XLE | **Low-moderate, indirect only** | Primarily commodity-price-driven; MS's DCF gap is blocked on a stale Brent assumption, not a fresh rate read |

**Standing flag, now in its second full week unresolved:** no desk has found a confirmable same-day 10yr Treasury print since roughly 10/1-10/2. This desk's own fresh search today again reproduced the pattern exactly (best result dated June 2026, the same stale item flagged repeatedly). Every DCF-derived verdict in this book is running on an assumption materially older than this desk is comfortable treating as current — this has now gone unresolved long enough that it should be treated as a standing structural limitation of this book's process, not a transient gap.

## 5. Recession stress test (NBER-style, moderate-recession assumptions, pool-weighted)

| Position | Assumed recession drawdown | Pool-weighted contribution |
|---|---|---|
| NVDA (high-beta, capex-cyclical) | -45% to -55% | -5.0% to -6.1% |
| VTI (broad US equity, GFC/2020-style) | -30% to -38% | -8.3% to -10.5% |
| VXUS (intl equity + FX drag) | -32% to -40% | -8.2% to -10.3% |
| OMCL (small-cap liquidity discount despite defensive end-market) | -35% to -45% | -2.7% to -3.5% |
| XLE (demand-driven recession scenario) | -30% to -45% | -3.4% to -5.1% |
| GEHC (defensive healthcare end-market, but capex-cycle exposed) | -25% to -35% | -1.2% to -1.7% |

**Estimated pool-level drawdown: roughly -28.8% to -37.2%** in a standard demand-driven recession — essentially unchanged from this morning. **Same caveat this desk repeats every run it's relevant:** this assumes a *demand-driven* recession where oil demand falls with everything else and XLE's -30%/-45% applies. If the recession is instead *supply/oil-shock-driven* — the scenario XLE was actually bought to hedge, and the scenario today's IMF PortWatch data arguably makes more likely, not less — XLE's behavior flips, potentially flat-to-positive. That distinction matters more after today's contradicting evidence than it did Friday.

## 6. Liquidity risk (per holding)

| Holding | Liquidity rating | Note |
|---|---|---|
| NVDA | Low risk | Mega-cap, among the most liquid equities traded |
| VTI | Low risk | One of the largest US ETFs by AUM/volume |
| VXUS | Low risk | Large, liquid diversified international ETF |
| XLE | Low risk | Large, liquid sector ETF |
| GEHC | Low-moderate risk | Large-cap, adequate average daily volume |
| **OMCL** | **Moderate risk — the book's least liquid holding** | Small-cap (~$1.5-2B market cap); meaningfully lower ADV than every other position. Irrelevant at today's $3.93 position size, but worth flagging ahead of any future DCA-gate tranche (now ~$1.61 away, the narrowest yet): use a limit order and check the spread |

**No liquidity risk currently constrains this account's ability to exit any position at its current size.** Standing, low-urgency note.

## 7. Single-stock risk and position sizing

- **NVDA (12.57% equity / 11.06% pool):** +1.06pp over BR's 10% pool target, inside the 5pp drift band, well below the 18-20% single-name trigger. Today's -1.10% move had no sourced catalyst found; not a trigger.
- **OMCL (8.77% / 7.72%):** below its 10% pool target by design (DCA-gated, -2.28pp drift) — the mechanism working as intended, gate ~$1.61 away, the closest reading on file.
- **XLE (12.76% / 11.23%):** modestly underweight its 12% pool target (-0.77pp), in-band.
- **GEHC (5.53% / 4.87%):** +0.87pp over its 4% pool target, still inside the 5pp band mechanically — this desk repeats its flag from this morning in sharper terms: the position has now drifted from -2.05% unrealized at 10:42 ET to essentially flat (-0.96%) by mid-afternoon, a ~1.1pp move inside four hours with zero sourced news. With BR's upside-trigger question closed 10/5, there is still no mechanism in this book that acts on this drift short of the 5pp pool band — and GEHC is now closer to that band's edge than it was this morning.
- **Combined NVDA+OMCL (21.34% of equity):** 3.66pp from the 25% backstop, narrower than this morning. No sizing action triggered, but the buffer is compressing, not widening, today.
- **No position-sizing changes recommended this run** — but see the GEHC flag above and the single-biggest-risk framing at top.

## 8. Tail risk scenarios (updated probability estimates)

| Scenario | Probability estimate | Pool-level impact |
|---|---|---|
| AI-bubble repricing (NVDA DCF gap persistently wide; five straight AI-adjacent names now rejected by MS/GS on valuation) | ~20-25%, unchanged | -6% to -11% pool-level |
| 10yr yield confirmation gap forces a fresh WACC rebuild in either direction | ~20-25% — now 11+ calendar days unconfirmable | -3% to -8%, concentrated in NVDA/OMCL/XLE/GEHC |
| Hormuz/Red Sea escalation to a sustained, confirmed closure | **~18-25%, raised from this morning's 12-18%** — today's IMF PortWatch transit data, CNBC's attack count, and the fresh tanker-sanctions detail argue the crisis is less resolved than the AFP/Kpler figure cited this morning implied; this desk is widening the range to reflect the genuine disagreement between sources rather than picking the more comfortable one | XLE theoretically +15-25% as intended hedge — reliability of that payoff is more plausible today than this morning's read implied, not less |
| GEHC earnings (10/28, 16 days out) and OMCL earnings (narrowed to 10/29-10/30) both approach the 2-week trigger window | ~100% this goes live on schedule | Governed by existing contingency plans — no fresh action needed yet |
| Government shutdown escalation | ~10%, unchanged | -3% to -6% if it re-escalates |
| Broad recession confirmation (NBER-style) | ~10-15% over 2-4 weeks | -28.8% to -37.2% pool-level (see §5) |
| GEHC's unexplained drift continues without a sourced catalyst or a mechanism to act on it | ~45-55%, raised slightly — now a sixth-plus consecutive session of the same pattern, accelerating intraday today | Not a loss scenario today (unrealized P&L now essentially flat), but the standing governance gap this desk named this morning is getting more urgent, not less, as the position approaches its entry cost from below |

## 9. Hedging strategies for the top 3 risks (equities-only — no options)

1. **The Hormuz data-contradiction risk (new this run) and the standing rate/macro data-blindness risk (11+ days running):** no fixed-income sleeve exists in this all-equity mandate, so there is no true hedge against either information gap. The mitigants are the same as always — deployable cash (11.99% of pool) staying uncommitted, and XLE itself as the equities-only proxy hedge for the oil-shock scenario. This desk's concrete recommendation: next run, have whichever desk does the news sweep explicitly reconcile the AFP/Kpler "partial recovery" figure against the IMF PortWatch transit-count data before either is cited again as settled — right now the book is carrying two contradicting priors on the same underlying question without having noticed the contradiction until this report.
2. **NVDA/AI-concentration risk:** unchanged — direct all fresh deployable cash away from NVDA (BR's standing, permanent policy) and toward under-target names once their own gates clear. OMCL's DCA gate (~$1.61 away, narrowest yet) remains the closest live mechanical lever.
3. **GEHC-drift governance gap:** this desk repeats and sharpens its recommendation from this morning — the position has moved another ~1.1pp toward its cost basis in four hours on zero sourced news, with no mechanism in this book positioned to act on it either way. This desk recommends the team revisit BR's 10/5 decision to close the upside-trigger question before the position either breaches the 5pp band mechanically (forcing a reactive decision) or reverses just as unexplainedly as it rose.

## 10. Rebalancing suggestions (allocation %, pool basis)

| Position | Current (pool) | BR target | Drift |
|---|---|---|---|
| VTI | 27.49% | 28% | -0.51pp |
| VXUS | 25.64% | 25% | +0.64pp |
| NVDA | 11.06% | 10% | +1.06pp — governed by the 5pp band, no action needed |
| XLE | 11.23% | 12% | -0.77pp |
| GEHC | 4.87% | 4% | +0.87pp — see §7/§8 flag, drift accelerating intraday |
| OMCL | 7.72% | 10% | -2.28pp (DCA-gated by design, narrowing as the gate approaches) |
| Cash | 11.99% | 11% | +0.99pp |

**No position breaches the 5pp single-position drift trigger — no rebalance is mechanically required.** This desk's recommendations above (§9.1, §9.3) are requests to reconcile a data contradiction and revisit a closed policy question, not proposed trades.

---

## Heat Map Summary

| Risk Factor | Level | Trend since 10/12 10:42 ET |
|---|---|---|
| Hormuz data contradiction (AFP/Kpler "partial normalization" vs. IMF PortWatch "near-total closure") | 🔴 High (new) | New this run — a genuine, unreconciled disagreement in the book's own sourcing |
| Rate/macro data blindness (10yr unconfirmable, now 11+ calendar days) | 🔴 High | → unchanged, still unresolved, duration worsening |
| NVDA valuation gap + AI-bubble commentary | 🔴 High | → unchanged |
| XLE DCF gap (blocked on a stale Brent assumption; hedge-reliability question now more open, not more settled) | 🟠 Elevated | → re-framed, not worsened in degree |
| GEHC valuation drift (now within ~1% of entry cost, best reading since 9/3, zero sourced catalyst across 6+ sessions) | 🟠 Elevated | ↑ worsened — accelerated intraday, approaching the entry-cost line from below |
| Upcoming binary events (GEHC earnings 10/28; OMCL earnings 10/29-10/30) | 🟡 Moderate | → unchanged |
| Look-through tech/AI concentration (~27-30% of equity) | 🟡 Moderate | → unchanged |
| OMCL drawdown (-21.43%) vs. widest DCF discount on book; DCA gate ~$1.61 away (narrowest yet) | 🟡 Moderate | → gate narrowing, otherwise flat |
| Government shutdown status | 🟢 Low | → stable |
| Pool profit level (+1.78%) | 🟢 Positive | ↑ modest intraday recovery vs. 10:42 ET's +1.51% |
| Headline concentration triggers (NVDA%, NVDA+OMCL% combined) | 🟢 Low | → clean, 3.66pp buffer to the 25% trigger, slightly narrower than this morning |
| Liquidity | 🟢 Low | → unchanged |

**Note on data quality (rule 4 discipline):** this run's dedicated Hormuz/oil search did not simply reproduce the staleness wall other fronts keep hitting — it returned a substantively different, more comprehensive read (CNBC attack-count figures, UKMTO incident logs, IMF PortWatch transit data, confirmed tanker sanctions) than the single AFP/Kpler data point this desk itself cited just four hours ago. That is flagged above as the single biggest risk precisely because it means this desk's own prior report may have been too quick to treat a thin data point as representative. The 10yr Treasury and AI-bubble searches, by contrast, reproduced the exact same staleness pattern as every prior run this week — no new information there.

---

Sources:
- Robinhood `get_portfolio` / `get_equity_positions` / `get_equity_quotes` (live, 2026-10-12 ~14:41 ET)
- Internal: trading-experiment/state.md (Balance history + Run notes through 10/12 ~13:38 ET), analysts/ms-dcf-valuation.md (10/12 ~10:13 ET), analysts/br-portfolio-builder.md (10/9 ~16:13 ET, targets still governing), analysts/jpm-earnings-analyzer.md (10/12 ~09:40 ET), analysts/gs-stock-screener.md (10/12 ~12:41 ET), this desk's own 10/12 ~10:42 ET report (prior version, git history)
- Fresh WebSearch this run: 10-year Treasury yield (today) — no usable result, best match a June 2026 "Data Talk" item, reproducing the standing staleness wall; GE HealthCare news (today) — no result dated today, nothing GEHC-specific found beyond already-known/older items; Strait of Hormuz oil tanker news (October 2026) — returned a substantively new, multi-source read (CNBC, UKMTO, IMF PortWatch, straits.live daily briefs through 10/9) describing the strait as effectively closed (4 transits/day vs. an 85/day baseline), directly in tension with this morning's AFP/Kpler "partial normalization" framing — see single-biggest-risk discussion above
