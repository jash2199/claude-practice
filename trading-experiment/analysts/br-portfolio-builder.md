# BR Portfolio Builder — Investment Policy Report
**Date: 2026-07-29 (Wednesday, ~17:00 ET, post-FOMC / post-close)**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-07-28 ~16:12 ET. Portfolio figures below are sourced from BW's 7/29 ~14:41 ET live, Robinhood-verified `get_portfolio`/`get_equity_positions` read (the most recent available) — I do not have direct Robinhood access; per house rule 4, treat any figure here as one refresh-cycle old and re-verify live before executing anything sizing-relevant.*

---

## TOP OF REPORT — single biggest gap vs. policy

**Unchanged from yesterday and now sharper: VXUS is still the most underweight line in the book (~16.1% of pool vs. the 25% core sub-target, an ~8.9pp gap), mirrored by VTI's ~+6pp overweight and cash sitting ~8.3pp above its 10% target.** One of the two live binary catalysts blocking this rebalance has now cleared — the FOMC delivered a hawkish 9-3 hold at 2pm ET today, and the market has already repriced it (Dow -2.2%, S&P -1.5%, Nasdaq -1.7% on the day, per CNBC/Yahoo Finance). **But OMCL reports tomorrow before the open (7/30, ~8:30am ET call) — still a live, un-hedgeable binary event on a held position — so rule 5 (no rebalancing into a live binary catalyst) still applies and the VXUS top-up should not execute today.** The correct action remains the same as I wrote yesterday: hold one more cycle, then close the gap at the first clean (non-chased) opportunity after tomorrow morning's print. The 7/31 time-box I set on 7/23 is now **2 days out** — there is exactly one more clear session (tomorrow afternoon, once OMCL has printed) to execute before the box forces the question regardless of price.

Today's session itself is a live illustration of why the cash buffer and diversification discipline exist: a genuine risk-off shock (hawkish Fed + hardening Iran/Hormuz escalation) hit the tape hard, and this book absorbed it with its dry powder and satellite diversification intact rather than being forced into a reactive decision. That is the policy working as designed, not something to react to.

---

## 1. Recommended allocation vs. current book

Trading-book value (per BW's 7/29 ~14:41 ET Robinhood-verified read): **pool ≈ $49.28** = equity $40.30 + deployable cash $9.00. (Reserve: a further ~$50 untouchable, per Jash's 7/10 clarification — excluded from all percentages below.)

| Sleeve | Ticker | Role | Target % | Current % | Current $ | Gap |
|---|---|---|---|---|---|---|
| Core | VTI (Vanguard Total Stock Market) | Core — broad US equity | 30% | 36.0% | ~$17.74 | **+6.0pp OVER** |
| Core | VXUS (Vanguard Total International) | Core — ex-US diversifier | 25% | 16.1% | ~$7.94 | **−8.9pp UNDER (largest gap)** |
| Satellite | NVDA | Satellite — single-name AI/semis conviction | 15% (soft cap 18-20%) | 9.8% | ~$4.84 | −5.2pp under (price drift, not a decision) |
| Satellite | OMCL | Satellite — healthcare-tech diversifier, half-size | 10% | 9.5% | ~$4.68 | −0.5pp ~on target (earnings tomorrow AM — see caveat below) |
| Satellite | XLE (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size | 10% | 10.3% | ~$5.10 | +0.3pp ~on target |
| Cash | — | Dry powder / event-window buffer | 10% | 18.3% | ~$9.00 | **+8.3pp OVER (2nd largest gap)** |
| **Total** | | | **100%** | **100%** | **~$49.28** | |

**Core / Satellite / Cash roll-up**: Core 55% target vs. 52.1% actual (−2.9pp); Satellite 35% target vs. 29.6% actual (−5.4pp); Cash 10% target vs. 18.3% actual (+8.3pp) — essentially unchanged from yesterday's read. The headline roll-up still understates the real story: the VTI/VXUS imbalance nets out to a small Core-level gap while masking a genuine within-core concentration issue (see §2).

**Caveat on OMCL's "on target" read**: its weight is near-target only because it is currently down (avg cost $46.99 vs. live ~$43.93, -6.5% per BW). Tomorrow's print can move this position ±15-21% intraday per JPM's own reaction-history framing — do not read today's proximity to target as stability. This is a sizing snapshot, not a forecast.

---

## 2. Core vs. satellite discipline — status check

- **Core (VTI + VXUS, target 55% of pool)**: unchanged imbalance from yesterday — VTI has absorbed every core dollar deployed since 7/21 while VXUS hasn't been topped up since 7/16. Sequencing artifact, not a rejection of VXUS. This is exactly what the pending rebalance plan addresses.
- **Satellite (NVDA + OMCL + XLE, target 35% of pool)**: all three remain within or near their individual soft caps; none needs trimming today. NVDA's underweight is price drift from the ongoing chip-sector rout (Intel -6%, AMD -8%, Micron -8% today per BW), not a signal — do not chase it back to target mid-rout (rule 2). OMCL carries the book's one live dated catalyst (prints tomorrow AM); XLE continues doing its job as the session's only green satellite position, up on the Iran-driven oil spike while the broader book sold off — the diversifying hedge working exactly as intended.
- **Cash (target 10%)**: still deliberately overweight, and correctly so — one of the two binary-event justifications for holding it (FOMC) cleared today; the other (OMCL) clears tomorrow morning. Once both catalysts are behind the book, cash should mechanically start moving back toward target via the VXUS top-up, not before.

---

## 3. Expected annual return range (historical basis)

| Holding | Basis | Expected range (long-run, annualized) |
|---|---|---|
| VTI | US total-market index, ~97-year S&P-proxy history | ~9-11% nominal, with real bad-decade outcomes as low as 0-4% |
| VXUS | Developed + EM ex-US index | ~6-9% nominal; wider dispersion than VTI, currency-adjusted |
| NVDA | Single-name, AI/semis hypergrowth — MS's DCF (~$150.6 fair value, unchanged model, ~23.4% downside at today's price) implies the stock trades well above a disciplined 11%/3% WACC/g build | Historically 25-40%+ CAGR over the past decade; **not a sustainable forward baseline** — treat projections above ~15-20%/yr as reflecting continued multiple expansion, not fundamentals |
| OMCL | Small/mid-cap healthcare-tech, high earnings-day beta (±15-21% single-day moves per JPM) | ~8-15% long-run, with genuine two-sided binary risk around each print — the very next one is tomorrow morning |
| XLE | Energy sector basket, oil-cycle-driven | ~5-9% long-run with high cyclical variance; MS's fresh scenario framework this cycle spans roughly −13% to +9% depending on whether the Iran escalation proves transient or structural |

**Blended portfolio expectation at current weights**: roughly **10-14% annualized** over a full market cycle, unchanged from yesterday's read — today's move is a single-session repricing, not a change to any position's underlying return distribution. The range still carries a genuinely fat left tail, consistent with the client's aggressive tolerance but worth restating plainly rather than smoothing over.

## 4. Expected maximum drawdown in a bad year

Unchanged from yesterday's cross-check against BW's recession stress test (pool-level ~-35.9%, equity-sleeve-only ~-43.9%, both at prior-day weights — today's weights are close enough that this remains the working figure). **Policy guidance stands: in a genuinely bad year, expect the equity sleeve to draw down 30-45%, and the pool (including the cash cushion) to draw down 20-30%.** Today's session (Dow -2.2%) is itself a small, live data point in that direction — the cash buffer and diversified satellite sleeve visibly cushioned the pool-level move relative to what an all-equity book would have shown.

## 5. Rebalancing schedule and trigger rules

1. **Calendar cadence**: standing bi-weekly allocation check at a designated Monday-morning run, plus any trigger-fired reviews below — unchanged.
2. **Drift trigger**: any single position drifting more than **5pp from its own target %** flags for review at the next scheduled run — currently flagged for VTI (+6.0pp), VXUS (−8.9pp), and NVDA (−5.2pp, not actionable per rule 2).
3. **Satellite concentration trigger** (unchanged): any single satellite name crossing ~18-20% of equity forces a mandatory trim review — all three currently well clear (9.8-10.3%).
4. **Falsifiable-trigger discipline** (unchanged): the VTI→VXUS 7/31 time-box is now 2 days out. If it fires without execution, that becomes the next run's lead item, not a silent extension.
5. **No rebalancing into a live binary catalyst**: FOMC has now cleared (today, 2pm ET); OMCL has not (tomorrow, ~8:30am ET). Do not execute the VXUS top-up, or any other core rebalance, until after tomorrow morning's print — consistent with rule 1 (no fresh-catalyst trades) and rule 2 (don't chase/react same-tick to the post-print move either direction).

## 6. Tax efficiency strategy (taxable cash account)

- **Every position in this book is still short-term** — the oldest holding (NVDA, entered 7/9) remains roughly 3 weeks old, nowhere near the 1-year long-term threshold (first eligible ~2027-07-09). Any gain realized today is taxed as ordinary income. This matters most for NVDA and OMCL, the two positions with the widest single-day swings — and OMCL specifically has its next such swing scheduled for tomorrow morning.
- **Core sleeve (VTI/VXUS) remains inherently tax-efficient by design** — low turnover, qualified dividends, broad diversification. Buy-and-hold posture unchanged; no change recommended.
- **Tax-loss harvesting readiness**: OMCL is currently down ~6.5% from average cost. If tomorrow's print triggers a structural-break sell per the OMCL contingency plan, that loss would be realized as short-term and usable to offset any short-term gain elsewhere in the book (e.g., XLE, currently the book's one green position). Keep this pairing in mind rather than treating each position's tax consequence in isolation.
- **Wash-sale discipline**: unchanged — if a satellite position is ever sold at a loss, do not re-buy the same ticker within 30 days. Directly relevant if OMCL's contingency-plan sell fires tomorrow.
- **Materiality caveat**: at ~$49 deployed, the actual tax dollar impact today is trivial. This section exists to establish the discipline now, before the account scales.

## 7. Dollar-cost-averaging plan for redeploying profits

1. **Next dollar still goes to VXUS**, sized **$5-8**, executed at the first scheduled run after tomorrow's OMCL print clears — realistically the 7/30 afternoon run or the 7/31 open, whichever comes first and shows a non-extended VXUS entry point (rule 2: no chasing a post-print relief or panic move in either direction on VXUS itself, which shouldn't move much on OMCL anyway, but do wait for the broader post-catalyst dust to settle).
2. **After VXUS closes to within ~2-3pp of its 25% target**, resume the standard "whichever core leg is more underweight" rule for any further core dollars — do not let VTI re-accumulate the same imbalance by defaulting to it out of habit.
3. **Satellite DCA**: no new satellite dollars recommended until NVDA, OMCL, and XLE have each had a full quarter (or one earnings cycle, for OMCL — which gets that test tomorrow) to establish a track record at current sizing. A fourth satellite slot is still not recommended at this pool size.
4. **Cash floor going forward**: once the VXUS top-up executes, target cash should mechanically fall back toward the 10% policy target (~$4-5 at current pool size). If cash re-accumulates above ~15% for more than a few cycles with no live binary-event justification afterward, that itself should trigger a fresh deployment review under rule 7.

## 8. Areas to consider from recent WEF / macro-policy discussion (fresh WebSearch this run)

- **"Quiet quitting" of US assets is now an explicit Davos 2026 theme, not a fringe idea** — hedge funds at Davos placed gold, silver, platinum and copper high on conviction lists, and diversification away from US assets was discussed as a structural trend driven by rising US deficits and global central banks diversifying reserves into non-dollar assets (Amundi's Davos 2026 recap; WEF's own "3 things I learned" piece). **This is a direct, strengthened data point in favor of closing the VXUS gap** — the case isn't just "VXUS is underweight vs. a static policy target," it's that the structural flows argument for ex-US diversification has gotten louder since I last wrote this section, not quieter.
- **WEF's 2026 Global Risks Report ranks geoeconomic confrontation as the top risk likely to trigger a material global crisis** (18% of respondents), with the recommended institutional response being to strengthen geopolitical risk monitoring and diversify regional dependencies rather than concentrate. This book's three-satellite structure (US tech/AI, healthcare, energy) plus the pending core geographic diversification is directionally aligned with that guidance.
- **Today's session is itself a small real-time case study in the "episodic energy bottleneck" scenario WEF flagged as newly mainstream** (per the Global Risks Report) rather than fringe: the Iran/Hormuz escalation drove Brent to the high-$80s/low-$90s intraday and is the direct reason XLE was the book's only green position today. The satellite XLE allocation is functioning exactly as the WEF-style "diversify against episodic energy shocks" playbook would recommend — worth noting as validation of the 7/24 XLE entry decision, not a reason to add further.
- **Sticky core inflation and the hawkish FOMC dissent resolve, rather than newly raise, a risk flagged in every recent Davos macro discussion** — tighter-for-longer policy expectations were already in the "live risk" bucket; today's 9-3 hold with three hawkish dissents is that risk partially crystallizing, not a new one appearing. No portfolio-level policy change follows from it; it reinforces the existing "hold the cash buffer through binary-event windows" discipline that is precisely what let this book absorb today's -2.2% Dow session without a forced decision.

---

## One-page Investment Policy Statement (for the trader to follow)

**Client**: Claude Robinhood Trader experiment. Capital: $50 base + accumulated profits, inside a ~$100 taxable cash account (the ~$50 beyond trading capital is untouchable reserve). Risk tolerance: aggressive. Horizon: short-to-medium, with an explicit goal of compounding into a long-running track record. Universe: equities/ETFs only, no options, fractional shares available.

**Target allocation** (of the ~$49 trading pool): Core 55% (VTI 30% / VXUS 25%) — Satellite 35% (NVDA 15% soft-capped at 18-20%, OMCL 10%, XLE 10%) — Cash 10% (higher during live binary-event windows, by design).

**Standing rules** (see Strategy & theories in state.md for full detail, rules 1-10): no trade without a fresh catalyst; never chase an extended move; diversified-basket buys are exempt from the single-name geopolitical veto; always verify price live via Robinhood before sizing; a DCF "sharply overvalued" call is a hard pass; new ideas need a full cross-vetting cycle before sizing; open theses get a falsifiable trigger with a hard time-box; look-through concentration matters more than headline allocation.

**Current live decision point**: VTI→VXUS rebalance, time-boxed to 2026-07-31 (2 days out). FOMC catalyst cleared today (7/29, hawkish hold); OMCL catalyst clears tomorrow morning (7/30, ~8:30am ET). Execute the top-up at the first clean opportunity after tomorrow's print — the last realistic window before the time-box forces the decision.

**Review cadence**: bi-weekly standing allocation check, plus trigger-fired reviews on >5pp single-position drift, satellite concentration crossing 18-20%, or any pre-committed time-box reaching its deadline.

---

## Cross-check with other analysts
- **BW (7/29, ~14:41 ET)**: overall risk grade cut to D- (from D on 7/24) specifically on OMCL's imminent binary event stacked with the semis rout — this report's read is consistent: hold the rebalance until that event clears, exactly as BW's own risk framing implies, rather than adding exposure into an unresolved dated risk.
- **MS (7/29, ~14:30 ET)**: NVDA DCF gap ~23.4% overvalued (unchanged model); OMCL ~30.7% undervalued but explicitly "still no buy signal, print is 1 day out" — same conclusion this report reaches independently via the binary-catalyst rule; XLE given a fresh scenario re-read (−13.2% to +8.5%) rather than a single point estimate given the escalation — consistent with treating XLE as a hold, not an add, today.
- **GS (7/29, ~16:15 ET)**: confirmed the FOMC outcome (9-3 hawkish hold) and today's broad risk-off close; flagged OMCL and PTCT both reporting within the same 24-hour window starting tomorrow morning — both "wait for the print," which is exactly this report's rule 5 application.
- **JPM (7/29, ~09:15 ET)**: OMCL 1 day out at time of writing (now imminent), "sixth straight cycle with no structural thesis-break catalyst found" — no reason found to preemptively trim ahead of the print, consistent with holding the position through tomorrow's event rather than reacting to price alone.

---

Sources:
- [Fed rate decision July 2026: Divided Fed holds interest rates steady (CNBC)](https://www.cnbc.com/2026/07/29/fed-rate-decision-july-2026.html)
- [Stock market today: Dow plunges by 1,100 points, S&P 500 and Nasdaq sink as yields rise on Fed's hawkish hold (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-wednesday-july-29-dow-sp-500-nasdaq-082009165.html)
- [Davos 2026: Geopolitical Shifts, Risks & Responses (Amundi)](https://www.amundi.com/institutional/article/davos-2026-geopolitical-shifts-reshape-global-agenda)
- [3 things I learned at Davos 2026 on the future of finance (World Economic Forum)](https://www.weforum.org/stories/2026/01/3-things-i-learned-at-davos-2026-on-the-future-of-finance/)
- [Top 10 Risks in 2026: Geoeconomic Confrontation Tops the List (World Economic Forum)](https://www.weforum.org/stories/2026/01/global-risks-2026-top-10-two-and-ten-year-horizon/)
