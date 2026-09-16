# BW Risk Assessment — Risk Management Report
**Date: 2026-09-16 (Wednesday), ~10:42 ET (real ET verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. Prior BW report: 2026-09-15 ~14:45 ET (Grade D, held). Today is day 2 of the FOMC's two-day meeting — decision lands ~14:00 ET, press conference ~14:30 ET with Chair Kevin Warsh, odds ~92% for a 25bp hike (would be the first hike since 2023). Fresh WebSearch this run on the 10yr/FOMC settle, VIX. Cross-read GS's fresh ~09:4x ET screener and MS's fresh ~10:1x ET DCF memo (both same-day).

---

## Overall Portfolio Risk Grade: **D-** (downgraded one notch from D)

## Single biggest risk right now
**The rate shock this desk has been flagging as "pending" for two weeks is now confirmed, not probable.** The 10-year Treasury's close crossed 5% and *settled* there — CNN and multiple sources now describe it as the highest level since July 2007 — and today the Fed is ~92% priced to deliver its first hike since 2023, on day 2 of the meeting. This portfolio has ~74% of its equity book (NVDA + VTI + VXUS, before even counting the growth-tilted slice of OMCL and GEHC) sitting in duration-sensitive assets, and MS's own WACC-rebuild trigger (a settled close above 5% held a full week) is now on its second day of the clock with no sign of a quick reversal. Simultaneously, the portfolio's only real hedge against the *other* live risk (Hormuz/oil shock) — XLE — is showing early signs of losing potency, as credible reporting (Bloomberg, 9/16) shows Saudi Arabia already routing crude back through the Strait with US military support. The portfolio is exposed to a rate shock on one side and losing its hedge against the geopolitical shock on the other, at the same time.

---

## Live Portfolio Snapshot (Robinhood, 2026-09-16 ~10:42 ET)

| Position | Qty (fractional) | Price | Value | Cost basis | Unrealized P/L | % of Equity | % of Pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $215.12 | $5.34 | $201.40 | **+6.81%** | 12.20% | 10.72% |
| VTI | 0.036690 | $373.89 | $13.72 | $370.40 | +0.94% | 31.33% | 27.55% |
| VXUS | 0.154525 | $86.075 | $13.30 | $84.13 | +2.31% | 30.38% | 26.71% |
| OMCL | 0.106405 | $33.02 | $3.51 | $46.99 | **-29.73%** | 8.03% | 7.06% |
| XLE | 0.086775 | $64.47 | $5.59 | $57.62 | +11.89% | 12.78% | 11.24% |
| GEHC | 0.036393 | $63.78 | $2.32 | $68.69 | -7.15% | 5.30% | 4.66% |
| **Equity total** | | | **$43.79** | | | 100% | 87.94% |
| Cash | | | $56.01 | | | — | 112.5% of pool basis* |

*Total account value **$99.80** = equity $43.79 + cash $56.01. Pool (total minus the $50 untouched principal reserve) ≈ **$49.80**, an accumulated **-0.40% loss** (-$0.20) on the trading book. Deployable cash within the pool ≈ $6.01 (~12.07% of pool), clean vs. the 10% floor. NVDA+OMCL combined concentration ≈ **20.23%** of equity — inside the 25% trigger with a 4.77pp buffer, but see look-through analysis below for why this headline number understates real single-theme risk.

---

## Heat Map Summary

| Risk Category | Level | Trend | Notes |
|---|---|---|---|
| Interest rate sensitivity | 🔴 High | ↑ Worsening | 10yr settled >5% (highest since 2007); FOMC hike decision today |
| Sector concentration (look-through tech/AI) | 🔴 High | → Flat | ~28% of equity in AI/tech once VTI/VXUS look-through is counted, not the headline 12.2% |
| Single-stock risk (OMCL) | 🟠 Elevated | → Flat | -29.73% unrealized, no catalyst until 10/29 earnings |
| Hedge effectiveness (XLE) | 🟠 Elevated | ↑ Worsening | Saudi pipeline reopening signal undercuts the war-premium thesis |
| Geographic/currency exposure | 🟡 Moderate | → Flat | ~70% US-domiciled exposure; VXUS is the only real diversifier |
| Correlation / diversification | 🟠 Elevated | → Flat | VTI+VXUS+NVDA move together in a broad risk-off; true diversifier count is low |
| Liquidity risk | 🟢 Low | → Flat | All six names/ETFs are liquid at position size; OMCL is the only name with real market-structure liquidity risk at scale |
| Recession / tail risk | 🟠 Elevated | ↑ Worsening | See stress test below |
| Geopolitical (Hormuz/oil) | 🟠 Elevated | → Flat | Still live, but partially offset by the pipeline-reopening signal |

---

## 1. Correlation Analysis Between Holdings

- **NVDA / VTI / VXUS move together in a broad risk-off.** VTI's own top holdings are AI/mega-cap-tech-heavy in 2026; NVDA is very likely a top-5 constituent of VTI in its own right. That means the portfolio's headline 12.2% NVDA weight is not the real AI-single-name exposure — it's layered on top of an already tech-heavy VTI sleeve. VXUS carries a smaller but real tech weight too (international tech, semis, and AI-adjacent names).
- **OMCL is the one genuinely idiosyncratic position.** Its -29.73% drawdown has tracked its own fundamentals (a name-specific decline, no clear macro linkage), not the broader tape — it is the closest thing this book has to a true diversifier, ironically because it's been a bad trade rather than because it was designed as one.
- **XLE is the designed diversifier/hedge**, historically low-to-negatively correlated with NVDA/VTI/VXUS in a rate-shock or growth-scare scenario, and positively linked to the Hormuz/oil geopolitical risk. That correlation profile is exactly why it was chosen as the hedge — but see §9 on why its effectiveness is now in question.
- **GEHC sits in between** — large-cap healthcare equipment has some defensive characteristics (lower beta than NVDA) but is not a true hedge; it trades with its own name-specific catalysts (Sofie Biosciences M&A chatter, CFO transition, Patient Care Solutions review) layered on top of broad-market beta.
- **Bottom line: excluding OMCL and XLE, four-fifths of this book's nominal position count (NVDA, VTI, VXUS, and to a lesser extent GEHC) will fall together in a genuine risk-off event.** The portfolio has fewer true diversifiers than its six-ticker count suggests.

## 2. Sector Concentration Risk (look-through, not headline)

Headline sector tags undercount real exposure because VTI and VXUS are diversified wrappers with their own sector tilts. Applying standard current sector-weight assumptions for a 2026 total-market fund (tech-heavy given the AI cycle):

| Sector (look-through) | Estimated % of Equity |
|---|---|
| Technology / Semiconductors (NVDA direct + VTI/VXUS tech slices) | **~28%** |
| Healthcare (OMCL + GEHC direct + VTI/VXUS healthcare slices) | ~21% |
| Energy (XLE direct + VTI/VXUS energy slices) | ~16% |
| All other sectors (Financials, Industrials, Consumer, etc., via VTI/VXUS) | ~35% |

**~28% of the equity book is effectively a bet on the AI/semiconductor trade**, once VTI and VXUS's own tech weightings are counted — well above what the NVDA+OMCL 20.23% concentration check captures, because that check treats VTI/VXUS as sector-neutral when they are not. This is the single largest gap between what the portfolio's own trigger rules monitor and what its actual factor exposure is.

## 3. Geographic Exposure and Currency Risk

- US-domiciled/denominated: NVDA, VTI, OMCL, XLE, GEHC ≈ **69.6%** of equity (all effectively USD, US-domestic risk).
- Non-US: VXUS ≈ **30.4%** of equity — the only real geographic and currency diversifier in the book.
- Cash ($56.01) is 100% USD.
- **Net: the portfolio (equity + cash combined) is roughly 82-84% USD/US-risk exposed.** A dollar-weakening or US-specific shock (e.g., a hawkish-hike-triggered dollar rally is actually the more live near-term risk today, which would pressure VXUS's unhedged foreign-currency translation modestly) has an asymmetric ability to hurt this book relative to its geographic label suggests.

## 4. Interest Rate Sensitivity by Position

| Position | Duration/Rate Sensitivity | Rationale |
|---|---|---|
| NVDA | **High** | Long-duration growth cash flows (MS WACC 11%); a rate move directly compresses DCF fair value |
| VTI | **High** | Broad market with a heavy long-duration growth/tech tilt in 2026 |
| VXUS | Moderate-High | Global bond selloff is broad-based; less direct US-rate linkage but not immune |
| OMCL | Moderate-High | Small/mid-cap growth profile is historically rate-sensitive, though much of the move may already be priced into the -29.73% drawdown |
| GEHC | Moderate | Large-cap industrial/healthcare duration is medium; defensive earnings partially buffer |
| XLE | **Low** | Energy cash flows are short-duration; energy has historically been one of the more rate-resilient/inflation-beneficiary sectors |

**~74% of equity (NVDA+VTI+VXUS+OMCL) carries moderate-to-high rate sensitivity.** Only XLE (12.78%) is a genuine rate-shock ballast, and GEHC (5.30%) is a partial one. This is the mechanical reason the FOMC decision today is the report's top risk.

## 5. Recession Stress Test — Estimated Drawdown

Using conservative historical-analog drawdown assumptions for a moderate-to-severe recession (informed by 2008/2020/2022 sector drawdowns), applied to current equity weights:

| Position | Equity Weight | Assumed Recession Drawdown | Weighted Contribution |
|---|---|---|---|
| NVDA | 12.20% | -50% | -6.10pp |
| VTI | 31.33% | -30% | -9.40pp |
| VXUS | 30.38% | -35% | -10.63pp |
| OMCL | 8.03% | -35% | -2.81pp |
| XLE | 12.78% | -40% | -5.11pp |
| GEHC | 5.30% | -22% | -1.17pp |
| **Weighted equity drawdown** | | | **≈ -35.2%** |

- **On the equity sleeve alone: ≈ -35.2%.**
- **On the pool (the actual risk-tracked trading capital, equity 87.94% + deployable cash 12.06% at ~0% stress loss): ≈ -30.9% drawdown.**
- **On the full account (including the untouched $50 reserve, cash 56.1% of total at ~0% stress loss): ≈ -15.5% drawdown.**

The cash buffer meaningfully cushions the *full account*, but the pool — the actual number this experiment is scored on — would take a **~31% hit** in a genuine recession scenario. That is a severe number for a book this concentrated in single-theme risk.

## 6. Liquidity Risk Rating by Holding

| Holding | Liquidity Rating | Notes |
|---|---|---|
| NVDA | 🟢 Very Low risk | Mega-cap, enormous daily volume |
| VTI | 🟢 Very Low risk | One of the largest ETFs by AUM |
| VXUS | 🟢 Very Low risk | Large international ETF; slightly wider spreads outside underlying-market hours |
| XLE | 🟢 Very Low risk | Large, heavily traded sector SPDR |
| GEHC | 🟡 Low-Moderate risk | Large-cap but materially less liquid than mega-cap tech/ETFs |
| OMCL | 🟠 Moderate risk | Smaller-cap healthcare IT name; thinner volume, wider spreads in stress |

**Caveat, stated plainly: at this account's position sizes ($2.32-$13.72 per line), none of these ratings translate into real execution risk today.** These ratings reflect market-structure risk that would matter at institutional size, not at this book's actual dollar exposure — flagged for completeness per the mandate, not because it's an active threat to this specific $50 book.

## 7. Single Stock Risk and Position Sizing

- **OMCL (-29.73% unrealized, 8.03% of equity):** the single worst position by a wide margin. The DCA gate correctly remains profit-linked and shut — that discipline is right and should not be relaxed just because the loss has grown uncomfortable. But the sizing question is separate from the DCA-add question: an 8% position that is down nearly 30% with no catalyst until October 29 earnings is a genuine drag on capital efficiency, sitting idle for six more weeks minimum.
- **NVDA (12.20% direct, ~28% look-through with VTI/VXUS):** the position-sizing rules correctly cap NVDA+OMCL nominal concentration at 25%, but as shown in §2, that check materially understates true single-theme (AI/semiconductor) exposure. Sizing discipline should account for look-through, not just direct holdings.
- **GEHC (5.30%, -7.15%):** small enough that single-stock risk here is contained; sits within BR's established 4-65 band, no sizing concern.
- **Recommendation:** no position in this book should be added to on a dip-buying basis while both (a) the rate-shock pause (rule 6a) is in effect and (b) the position's own valuation/catalyst gate hasn't cleared. That is already the desk's standing practice — this report endorses continuing it, not loosening it.

## 8. Tail Risk Scenarios (with probability estimates)

| Scenario | Estimated Probability | Impact if realized |
|---|---|---|
| FOMC delivers a hawkish surprise (50bp hike, or 25bp + hawkish dot-plot/guidance) today | ~15-20% | Sharp NVDA/VTI/VXUS selloff; 10yr likely pushes well past 5%, reinforcing the WACC-rebuild trigger immediately rather than in a week |
| 10yr holds a settled close >5% for a full week (MS's WACC-rebuild trigger) | ~50-60% (day 2 of the clock, no reversal signs) | Triggers a coordinated four-model DCF rebuild across NVDA/XLE/GEHC/OMCL — a process event, not itself a loss, but likely to reprice fair-value targets down across growth names |
| Further Hormuz/Strait of Hormuz kinetic escalation | ~10-15% (any given week, given ongoing tension) | Near-term XLE-positive (oil spike), but broad-market risk-off likely dominates and hits the other 87% of equity harder than XLE gains offset |
| Saudi pipeline reopening fully confirmed, oil war-premium unwinds | ~30-40% (within 2-3 weeks, per AP 3-5wk/Reuters 5-6wk repair estimates plus the fresh Hormuz-rerouting signal) | XLE gives back its geopolitical premium precisely when it's needed most as a rate-shock offset — the compounding tail risk this report flags as the top concern |
| OMCL posts another leg down pre-earnings on no news (pure drift) | ~25% | Small dollar impact given position size, but a further blow to book-level capital efficiency |
| GEHC/Sofie Biosciences deal confirmed on adverse terms (overpay) | ~20-30% (deal confirmation), impact conditional | Limited — GEHC is only 5.30% of equity |

## 9. Hedging Strategies for the Top 3 Risks (equities-only — no options available)

**Risk #1 — Confirmed rate shock (10yr settled >5%, FOMC hike today):**
No options-based rate hedge is available on this desk. The only equities-only levers are (a) continuing rule 6a's pause on new NVDA/VTI/VXUS adds — already in force, and this report explicitly endorses keeping it in force through the FOMC decision and the full-week settle clock, not relaxing it on any post-decision relief rally; and (b) letting deployable cash (~12% of pool) sit rather than being deployed into more duration risk. There is no equities-only way to actively hedge duration risk in a book this size beyond holding cash and not adding.

**Risk #2 — Look-through AI/tech concentration (~28% of equity, understated by the 20.23% headline check):**
The only real equities-only lever is relative rebalancing: trimming the highest-duration, most tech-concentrated sleeve (VTI, at 31.33% the single largest position) modestly in favor of cash or a more genuinely diversifying line, rather than adding further to any AI-adjacent name. See rebalancing suggestion below.

**Risk #3 — XLE hedge losing potency (Saudi pipeline reopening undercutting the war-premium thesis):**
This is a hedge-quality risk, not a position-level risk — the portfolio has no second, equities-only, negatively-correlated ballast to fall back on if XLE's premium unwinds. Recommend explicitly re-underwriting XLE's hedge role at the next GEHC/XLE-relevant analyst read: if the pipeline reopening is confirmed, this desk would not automatically downgrade XLE's hold thesis (MS still separately assesses it on DCF/overvaluation grounds), but the team should stop treating it as a reliable geopolitical hedge and treat the rate-shock exposure as effectively unhedged.

## 10. Rebalancing Suggestions (illustrative allocation %, research only — this desk places no trades)

| Position | Current (% equity) | Suggested Target (% equity) | Rationale |
|---|---|---|---|
| NVDA | 12.20% | 12.20% (hold) | Governed by rule 6a pause; no add, no trim absent a trigger |
| VTI | 31.33% | ~27-28% | Trim modestly — reduce the largest single contributor to look-through tech concentration and rate sensitivity; redeploy into pool cash, not into another equity line |
| VXUS | 30.38% | 30.38% (hold) | Genuine geographic/currency diversifier — do not trim the one real diversifier in the book |
| OMCL | 8.03% | 8.03% (hold) | DCA gate correctly shut (profit-linked, not price-linked); no structural break found to justify a trim either — hold until 10/29 earnings or a genuine catalyst |
| XLE | 12.78% | 12.78% (hold) | Still functions as the designated hedge on paper; re-underwrite hedge role, don't resize on this report alone |
| GEHC | 5.30% | 5.30% (hold) | Within BR's established band, no sizing concern |

**Net suggestion: a modest 3-4pp trim of VTI into cash**, raising deployable pool cash from ~12% toward ~15-16%, specifically as a rate-shock/FOMC-decision-day buffer — not a rotation into any other position. This is a suggestion for the team to weigh, not an instruction; this desk places no trades.

---

## Stance note
This grade moved to D- because a risk this desk has been calling "pending" for two weeks crossed into "confirmed" today — the settled close above 5% is real, dated, and independently sourced, not a repeat of an already-priced story. Radical transparency requires saying plainly: this book is more concentrated in a single macro factor (long-duration growth/AI) than its trigger rules currently measure, and its only geopolitical hedge is showing real signs of losing potency at the exact moment the other risk (rates) is crystallizing. Nothing here compels a trade today — but nothing here should be read as "steady as she goes" either.

---

Sources:
- [10-year Treasury yield hits highest level since 2007 ahead of Fed rate decision - CNN Business](https://www.cnn.com/2026/09/15/investing/bond-market-treasury-fed)
- [Will the Fed Hike Rates in September? A 25-Basis-Point Move Is Now Expected - Chase](https://www.chase.com/personal/investments/learning-and-insights/article/september-2026-rate-hike-now-expected-amid-energy-shocks)
- [VIX Volatility Index Today - MacroRadar](https://www.macroradar.io/vix)
- Internal: trading-experiment/state.md (9/16 ~09:36 ET live run), analysts/gs-stock-screener.md (9/16 ~09:4x ET), analysts/ms-dcf-valuation.md (9/16 ~10:1x ET), analysts/br-portfolio-builder.md (9/15 ~16:11 ET), analysts/jpm-earnings-analyzer.md (9/16 ~09:18 ET)
