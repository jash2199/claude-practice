# BR Portfolio Builder — Investment Policy Report
**Date: 2026-08-13 (Thursday), ~16:2x ET**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-08-12 ~17:41 ET. Portfolio figures below are derived from state.md's freshest Robinhood-verified `get_portfolio` read (8/13 ~15:3x ET, seventh run of the day) plus BW's 14:4x ET risk read, GS's ~15:1x ET screener, JPM's 09:35 ET earnings calendar, and MS's ~10:1x ET DCF update for cross-checking. I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant.*

---

## TOP OF REPORT — single biggest gap vs. policy

**NVDA's underweight is still the single largest live gap on the book — now the sixth-plus consecutive report logging the same fact — and it widened again today as VTI/VXUS drifted further over target on a broad relief rally.**

| | Gap (pp of pool) |
|---|---|
| NVDA | **−4.04pp UNDER** (10.96% actual vs. 15% target) |
| VTI | +2.57pp over (32.57% vs. 30%) |
| VXUS | +1.53pp over (26.53% vs. 25%) |
| OMCL | −2.16pp under (7.84% vs. 10%) |
| XLE | +0.36pp over (10.36% vs. 10%) — essentially on target |
| Cash | +1.74pp over (11.74% vs. 10%) |

No position breaches the 5pp single-position drift trigger, the 25%-of-equity NVDA+OMCL combined trigger (currently ~21.31% of equity, ~3.69pp buffer), or the 15%-of-equity individual satellite triggers on OMCL/XLE. This is the same structural picture this desk has now flagged for six consecutive reports: **the policy wants more NVDA than the book holds, while MS's DCF (~33.1% downside to fair value, widened again today on continued price strength) and BW's risk desk (13 days to the Aug 26 print, CDS still elevated near 79.8bps) both argue against adding.** That is not a contradiction this desk needs to resolve today — it is exactly the kind of tension a policy allocation is supposed to surface and hold, not paper over. **Still monitor-only, rule 1 applies cleanly: gap is drifting on price action (VTI/VXUS core sleeves rallying, NVDA rallying less in relative-weight terms), not a trade signal on its own.**

---

## 1. Recommended allocation vs. current book

Trading-book value (per state.md's 8/13 ~15:3x ET Robinhood-verified read): **pool ≈ $51.0997** = equity $45.0997 + deployable cash $6.00. (Reserve: a further ~$50 untouchable, per Jash's 7/10 clarification — excluded from all percentages below. **All percentages in this report are % of pool unless explicitly marked "% of equity."**)

| Sleeve | Ticker | Role | Target % (of pool) | Current % (of pool) | Current $ (approx) | Gap |
|---|---|---|---|---|---|---|
| Core | VTI (Vanguard Total Stock Market) | Core — broad US equity | 30% | 32.57% | $16.64 | +2.57pp over (inside drift band) |
| Core | VXUS (Vanguard Total International) | Core — ex-US diversifier | 25% | 26.53% | $13.56 | +1.53pp over (inside band) |
| Satellite | NVDA | Satellite — single-name AI/semis conviction | 15% (soft cap 18-20% of equity) | 10.96% | $5.60 | **−4.04pp UNDER — largest gap on the book, see TOP** |
| Satellite | OMCL | Satellite — healthcare-tech diversifier, half-size | 10% | 7.84% | $4.01 | −2.16pp under |
| Satellite | XLE (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size | 10% | 10.36% | $5.29 | +0.36pp — essentially on target |
| Cash | — | Dry powder / event-window buffer | 10% | 11.74% | $6.00 | +1.74pp over |

**No new tickers recommended this run.** GS's coverage-list conviction picks outside the current five (MU, AVGO, GEHC, PTCT) all remain either rule-5 hard-passed (MU — CXMT capacity competition, unchanged despite today's fresh JPM-13F-buy data point) or rule-6 cross-vet-blocked pending MS/BW coverage extension (GEHC, PTCT). This book's satellite sleeve stays at three names (NVDA, OMCL, XLE) by design until a fourth clears the same bar the first three did.

---

## 2. Core vs. satellite

- **Core (55% target, 59.10% actual):** VTI + VXUS. Broad, diversified, low-turnover — the compounding engine. Both sleeves are modestly over target purely from price appreciation, not new buys (last core trade was the 8/7 VTI trim).
- **Satellite (35% target, 29.16% actual):** NVDA + OMCL + XLE. Concentrated, higher-conviction, half-size-entry-disciplined positions. Collectively underweight — the mirror image of core's overweight, both drifting the same direction (rallying core, lagging-in-relative-weight satellites) rather than any deliberate reallocation.
- **Cash (10% target, 11.74% actual):** dry powder held deliberately through the NVDA/CRWD Aug 26 earnings window per BW's binary-event framing — see §6.

---

## 3. Expected annual return range (historical-data basis)

| Sleeve | Historical annualized range | Note |
|---|---|---|
| VTI | ~9-11% | Long-run US total-market average, wide single-year dispersion |
| VXUS | ~6-9% | Ex-US developed+EM blend, historically trails US in this cycle |
| NVDA | ~25-45%+ (or a large negative year) | Single-name semis/AI — this book's highest-variance line item by far |
| OMCL | ~10-15% | Small/mid-cap healthcare-tech, idiosyncratic, historically decorrelated from the AI trade |
| XLE | ~8-12% (ex-dividend) + ~3% yield | Cyclical, oil-price-driven, mean-reverting |

**Blended portfolio expected return, weighted to current actual allocation: roughly 11-16% annualized**, skewed upward by NVDA's outsized variance contribution even at its current underweight. This is a wide, low-confidence band appropriate to an aggressive, satellite-heavy book this size — not a forecast to size trades off.

---

## 4. Expected maximum drawdown in a bad year

**Estimate: 35-45% peak-to-trough in a genuine risk-off year**, driven primarily by three stacked exposures this book carries simultaneously: (1) NVDA/semis-cycle correction (MS's own DCF already reads ~33% downside to fair value at *today's* price, before any bad-year multiple compression), (2) look-through tech concentration via VTI/VXUS (BW's heat map has flagged this Medium-High for weeks), and (3) OMCL/XLE both being small, single-name/single-sector satellite bets with no stop-loss mandate. The core sleeves (VTI/VXUS) provide real but partial dampening — a genuine 2022-style multi-asset selloff would still hit this book harder than a plain 60/40 or even a plain all-equity index fund, by design (aggressive mandate, satellite concentration). This is the honest cost of the mandate's risk tolerance, not a flaw to fix.

---

## 5. Rebalancing schedule and trigger rules (standing, unchanged)

No calendar-based rebalancing — this book runs on **falsifiable, pre-committed triggers**, checked every scheduled run:
1. **5pp single-position drift trigger** (pool basis) — any core/satellite position drifting >5pp from its target fires a mandatory rebalance review. Not fired (largest: NVDA −4.04pp).
2. **NVDA solo concentration trigger** — 18-20% of equity fires a mandatory trim review. Currently ~12.42% of equity — well clear.
3. **NVDA+OMCL combined trigger** — 25% of equity fires a mandatory review of which name is driving the breach. Currently ~21.31% of equity — ~3.69pp buffer.
4. **OMCL/XLE individual satellite trigger** — 15% of equity each. Both clean.
5. **Cash floor** — deployable cash target ~10% of pool; below-target cash for multiple consecutive cycles is itself a trigger to redeploy into the most underweight cleared candidate. Currently *above* floor (11.74%), so this cuts the other way — mild pressure to deploy, not to raise cash.
6. **Rate-shock trigger (rule 6a, BW-owned)** — two consecutive closes above 4.75% on the 10-year fires a portfolio-wide equity-de-risking review. Currently ~4.64% (eased today per BW) — not fired, buffer widened.

---

## 6. Tax efficiency strategy (taxable account)

- **Hold period discipline**: every position in this book is currently short-term (oldest lot, NVDA, dates to 7/9/26 — just over one month). None crosses the one-year long-term capital gains threshold yet. As positions age past 12 months, any future trim should preferentially harvest the longest-held lots first where a choice exists, to convert short-term gains (taxed as ordinary income) into long-term (preferential rate) — a real, compounding tax edge on a small account with a long horizon.
- **ETF tax efficiency**: VTI/VXUS/XLE are structurally tax-efficient (in-kind creation/redemption minimizes embedded capital-gains distributions) — the core+XLE sleeves are already the "quiet" part of the tax picture by construction.
- **Tax-loss harvesting**: no position is currently underwater on a book-wide basis, so nothing to harvest today. If OMCL (the book's most volatile satellite by percentage swings) were to sit at a loss for an extended period, a harvest-and-replace (e.g., into a healthcare-tech-adjacent name, avoiding a wash sale by not repurchasing OMCL itself within 30 days) would be worth flagging.
- **Avoid unforced churn**: the trade log's own discipline (rule-based, falsifiable triggers rather than reactive trading) is already the single best tax-efficiency lever available — every avoided trade is an avoided short-term-gain realization event.

---

## 7. Dollar-cost-averaging plan for redeploying profits

With deployable cash modestly *above* its 10% floor (~11.74%) and NVDA the standing largest gap:
- **Primary DCA target: NVDA.** Continue the book's established half-size, entry-disciplined approach (rule 2 — buy on flat-to-down days, never mid-spike) in **$2-3 tranches**, sized small precisely because MS's DCF and BW's binary-event framing both argue for caution into the Aug 26 print. This is a "narrow the underweight opportunistically," not "close the gap in one trade," plan.
- **Secondary DCA target: OMCL**, the second-largest gap (−2.16pp), gated as always by the standing MS/BW post-transcript sizing sign-off (still open per GS's report — now flagged as a pure-process, not conviction, blocker for two-plus weeks).
- **Explicit pre-earnings guidance**: given JPM's 13-days-to-print framing and BW's CDS-widening flag, this desk recommends **no NVDA add between now and the Aug 26 print** even if a flat/down day presents a technically clean entry — the DCA plan resumes post-print, informed by the actual result rather than sized into the binary event itself. This tightens rule 2 with an event-specific override, consistent with how the OMCL and XLE entry triggers were each hardened with their own catalyst-specific gates before firing.

---

## 8. Areas to consider from recent WEF / macro-policy discussion

- **Market-wide AI concentration is now a structural, not idiosyncratic, risk.** Fresh data point this run: the 10 largest US index constituents (almost all AI-linked) now make up ~36% of the Morningstar US Market Index, up from ~23% five years ago — the most concentrated the US market has been since 1932. This directly validates BW's standing "look-through tech concentration" flag: even *without* adding to NVDA, this book's VTI/VXUS core sleeves carry meaningful embedded AI-concentration exposure that a naive "NVDA is only ~11% of pool" read understates.
- **Rate-policy backdrop turned mildly hawkish this week, worth flagging against the book's rate-shock trigger.** Fed funds futures are now pricing ~60% odds of a hold (up from ~45% a week ago) and — more notably — rising odds of a *hike*, not a cut, later in 2026 (>53% October, ~73% December per futures pricing this week). This cuts against the recent narrative of imminent easing and is a reason to keep rule 6a's 4.75%-two-close threshold as a live, not academic, trigger even though the 10-year itself eased today.
- **International/non-AI diversification is being independently validated by the broader market, not just this book's own design.** The "anything but AI" rotation into non-US and value names this year is the same logic behind this book's VXUS and XLE satellite/core allocations — external confirmation that the policy's diversification design, not just its individual stock picks, is directionally sound.
- **Bonds remain a structural gap** this account cannot fill (equities/ETFs only mandate, no fixed income) — worth stating explicitly rather than silently: this book has zero duration exposure as a portfolio-level diversifier, which is a known, accepted limitation of the mandate, not an oversight.

---

## One-page Investment Policy Statement

**Client**: Claude Robinhood Trader — $50 base capital + accumulated profits, ~$100 taxable cash account (reserve beyond trading capital untouchable), aggressive risk tolerance, short-to-medium horizon with long-run compounding ambition, equities/ETFs only, fractional shares.

**Objective**: Maximize long-run compounded return within a disciplined, falsifiable-trigger risk framework — not to time markets or chase news cycles.

**Target allocation (% of tradeable pool)**: VTI 30% (core) · VXUS 25% (core) · NVDA 15% (satellite, soft cap 18-20% of equity) · OMCL 10% (satellite, half-size) · XLE 10% (satellite, half-size) · Cash 10% (dry powder / event buffer).

**Standing triggers**: 5pp single-position drift (any sleeve) · 18-20% NVDA solo (% of equity) · 25% NVDA+OMCL combined (% of equity) · 15% OMCL/XLE individual satellite (% of equity) · 4.75% two-close 10yr rate-shock (portfolio-wide de-risk review) · 10% cash floor.

**Entry discipline**: no chasing extended moves (rule 2); diversified baskets exempt from single-name geopolitical vetoes; every new-capital decision cross-vetted across MS (valuation) and BW (risk) before sizing (rule 6); pre-committed, time-boxed triggers preferred over live in-the-moment decisions (rule 7, validated on OMCL and XLE entries).

**Current live tension (unresolved by design)**: NVDA is the largest gap-to-target on the book (policy underweight) while simultaneously the most richly-valued position per MS's DCF and the nearest binary catalyst per JPM/BW (Aug 26 print, 13 days out). Policy says add; valuation and event-risk both say wait. This desk's role is to hold that tension visible, not resolve it unilaterally — the book continues to defer to the cross-desk gate (rule 6) rather than either signal alone.

**Review cadence**: every scheduled run, against this policy, not the news cycle.
